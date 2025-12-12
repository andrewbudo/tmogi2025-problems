Вычислить предельную погрешность получения приращения координат по оси абсцисс, если наклонное расстояние D = 154.31 ± 0.06 м, угол наклона v = 5°40′± 20′ и дирекционный угол стороны α = 93°17′± 0.5′.

**Дано:**  
D = 154.31 м  
$m_D$ = 0.06 м  
v = 5°40′ = 5.66666°   
$m_v$ = 20′ = 0.33333°  
α = 93°17′ = 93.283333°  
$m_α$ = 0.5' = 0.008333°

**Найти:**  
${(m_{\Delta X})}_{пред}$ - ?

**Решение:**  
Воспользуемся теоремой переноса ошибок.
Для функции $y=f(a,b)$, 
значение СКП находится по формуле:
$$m_y = \sqrt{\left ( \frac{\partial f}{\partial a}   \right )^2 \cdot m_a^2 + \left ( \frac{\partial f}{\partial b}   \right )^2 \cdot m_b^2}$$

Составим функцию связи искомого значения и известных параметров.  

Найдём горизонтальное проложение:
$$ S = D \cdot cos(v) $$

Найдём значение приращения по оси абсцисс:
$$ \Delta X = S \cdot cos(α) $$

Тогда функция связи будет иметь вид:
$$ \Delta X = D \cdot cos(v) \cdot cos(α) $$

Найдём частные производные по трём параметрам:

1. $$\frac{\partial \Delta X}{\partial D} = cos(v) \cdot cos(α)$$
2. $$\frac{\partial \Delta X}{\partial v} = - D \cdot sin(v) \cdot cos(α)$$
3. $$\frac{\partial \Delta X}{\partial α} = - D \cdot cos(v) \cdot sin(α) $$

Формула для вычисления СКП приращения координат по оси абсцисс:

$$m_{\Delta X}^2 = \left ( \frac{\partial \Delta X}{\partial D} \right )^2 \cdot m_D^2 +
                   \left ( \frac{\partial \Delta X}{\partial v} \right )^2 \cdot m_v^2 +
                   \left ( \frac{\partial \Delta X}{\partial α} \right )^2 \cdot m_α^2$$

<!--
$$m_{\Delta X}^2 = \left ( cos(v) \cdot cos(α) \right )^2 \cdot m_D^2 +
                   \left ( - D \cdot sin(v) \cdot cos(α) \right )^2 \cdot m_v^2 +
                   \left ( - D \cdot cos(v) \cdot sin(α) \right )^2 \cdot m_α^2$$                   
-->

$ m_{\Delta X}^2 = \left ( cos(v) \cdot cos(α) \right )^2 \cdot m_D^2 + $  
$ + \left ( - D \cdot sin(v) \cdot cos(α) \right )^2 \cdot m_v^2 + $  
$ +\left ( - D \cdot cos(v) \cdot sin(α) \right )^2 \cdot m_α^2 $ 

$$m_{\Delta X} = \sqrt{\left ( cos(v) \cdot cos(α) \right )^2 \cdot m_D^2 +
                   \left ( - D \cdot sin(v) \cdot cos(α) \right )^2 \cdot m_v^2 +
                   \left ( - D \cdot cos(v) \cdot sin(α) \right )^2 \cdot m_α^2}$$  


$$ {(m_{\Delta X})}_{пред} = {(m_{\Delta X})} \cdot t $$

Значение квантиля t = 3 для предельной погрешности.

Итоговая формула будет иметь вид:

$$m_{\Delta X} = t \cdot \sqrt{\left ( cos(v) \cdot cos(α) \right )^2 \cdot m_D^2 +
                   \left ( - D \cdot sin(v) \cdot cos(α) \right )^2 \cdot m_v^2 +
                   \left ( - D \cdot cos(v) \cdot sin(α) \right )^2 \cdot m_α^2}$$  

