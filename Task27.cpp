#include <stdio.h>
#include <math.h>

int main() {
    double D;
    double m_D;
    double v;
    double m_v;
    double a;
    double m_a;
    int t = 3;
    scanf("%lf", &D);
    scanf("%lf", &m_D);
    scanf("%lf", &v);
    scanf("%lf", &m_v);
    scanf("%lf", &a);
    scanf("%lf", &m_a);

    const double pi = 3.141592654;
    double v_rad = v * pi / 180;
    double m_v_rad = m_v * pi / 180;
    double a_rad = a * pi / 180;
    double m_a_rad = m_a * pi /180;

    double p1 = cos(v_rad) * cos(a_rad);
    double p2 = -1 * D * sin(v_rad) * cos(a_rad);
    double p3 = -1 * D * cos(v_rad) * sin(a_rad);

    double ans = t*sqrt(p1*p1*m_D*m_D +
                      p2*p2*m_v_rad*m_v_rad +
                      p3*p3*m_a_rad*m_a_rad);
    printf("%.5lf", ans);                      

}

