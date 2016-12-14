#ifndef STRUCTDEF_H_
#define STRUCTDEF_H_

#include <vector>

struct flow{
  double r, u, v, w, E;
  std::vector<double> Y;

  flow& operator=(const flow& k) {
    for (int i = 0; i < k.Y.size(); i++){
      this->Y[i] = k.Y[i];
    }
    this->r = k.r;
    this->u = k.u;
    this->v = k.v;
    this->w = k.w;
    this->E = k.E;
    return *this;
  }

  flow& operator+=(flow& rhs) {
    for (int i = 0; i < rhs.Y.size(); i++){
      this->Y[i] += rhs.Y[i];
    }
    this->r += rhs.r;
    this->u += rhs.u;
    this->v += rhs.v;
    this->w += rhs.w;
    this->E += rhs.E;
    return *this;
  }

  flow& operator-=(const flow& rhs) {
    for (int i = 0; i < rhs.Y.size(); i++){
      this->Y[i] -= rhs.Y[i];
    }
    this->r -= rhs.r;
    this->u -= rhs.u;
    this->v -= rhs.v;
    this->w -= rhs.w;
    this->E -= rhs.E;
    return *this;
  }

  flow& operator*=(const flow& rhs) {
    for (int i = 0; i < rhs.Y.size(); i++){
      this->Y[i] *= rhs.Y[i];
    }
    this->r *= rhs.r;
    this->u *= rhs.u;
    this->v *= rhs.v;
    this->w *= rhs.w;
    this->E *= rhs.E;
    return *this;
  }

  flow operator/=(const flow& rhs) {
    for (int i = 0; i < rhs.Y.size(); i++){
      this->Y[i] /= rhs.Y[i];
    }
    this->r /= rhs.r;
    this->u /= rhs.u;
    this->v /= rhs.v;
    this->w /= rhs.w;
    this->E /= rhs.E;
    return *this;
  }

};







flow operator+(const flow& lhs, const flow& rhs) {
  flow temp;
  for (int i = 0; i < lhs.Y.size(); i++){
    temp.Y[i] = lhs.Y[i] + rhs.Y[i];
  }
  temp.r = lhs.r + rhs.r;
  temp.u = lhs.u + rhs.u;
  temp.v = lhs.v + rhs.v;
  temp.w = lhs.w + rhs.w;
  temp.E = lhs.E + rhs.E;
  return temp;
}

flow operator+(const flow& lhs, const double& k) {
  flow temp;
  for (int i = 0; i < lhs.Y.size(); i++){
    temp.Y[i] = lhs.Y[i] + k;
  }
  temp.r = lhs.r + k;
  temp.u = lhs.u + k;
  temp.v = lhs.v + k;
  temp.w = lhs.w + k;
  temp.E = lhs.E + k;
  return temp;
}

flow operator+(const double& k, const flow& rhs) {
  flow temp;
  for (int i = 0; i < rhs.Y.size(); i++){
    temp.Y[i] = k + rhs.Y[i];
  }
  temp.r = rhs.r + k;
  temp.u = rhs.u + k;
  temp.v = rhs.v + k;
  temp.w = rhs.w + k;
  temp.E = rhs.E + k;
  return temp;
}

flow operator-(const flow& lhs, const flow& rhs) {
  flow temp;
  for (int i = 0; i < lhs.Y.size(); i++){
    temp.Y[i] = lhs.Y[i] - rhs.Y[i];
  }
  temp.r = lhs.r - rhs.r;
  temp.u = lhs.u - rhs.u;
  temp.v = lhs.v - rhs.v;
  temp.w = lhs.w - rhs.w;
  temp.E = lhs.E - rhs.E;
  return temp;
}

flow operator-(const flow& lhs, const double& k) {
  flow temp;
  for (int i = 0; i < lhs.Y.size(); i++){
    temp.Y[i] = lhs.Y[i] - k;
  }
  temp.r = lhs.r - k;
  temp.u = lhs.u - k;
  temp.v = lhs.v - k;
  temp.w = lhs.w - k;
  temp.E = lhs.E - k;
  return temp;
}

flow operator-(const double& k, const flow& rhs) {
  flow temp;
  for (int i = 0; i < rhs.Y.size(); i++){
    temp.Y[i] = k - rhs.Y[i];
  }
  temp.r = k - rhs.r;
  temp.u = k - rhs.u;
  temp.v = k - rhs.v;
  temp.w = k - rhs.w;
  temp.E = k - rhs.E;
  return temp;
}

flow operator*(const flow& lhs, const flow& rhs) {
  flow temp;
  for (int i = 0; i < lhs.Y.size(); i++){
    temp.Y[i] = lhs.Y[i] * rhs.Y[i];
  }
  temp.r = lhs.r * rhs.r;
  temp.u = lhs.u * rhs.u;
  temp.v = lhs.v * rhs.v;
  temp.w = lhs.w * rhs.w;
  temp.E = lhs.E * rhs.E;
  return temp;
}

flow operator*(const flow& lhs, const double& k) {
  flow temp;
  for (int i = 0; i < lhs.Y.size(); i++){
    temp.Y[i] = lhs.Y[i] * k;
  }
  temp.r = lhs.r * k;
  temp.u = lhs.u * k;
  temp.v = lhs.v * k;
  temp.w = lhs.w * k;
  temp.E = lhs.E * k;
  return temp;
}

flow operator*(const double& k, const flow& rhs) {
  flow temp;
  for (int i = 0; i < rhs.Y.size(); i++){
    temp.Y[i] = k * rhs.Y[i];
  }
  temp.r = k * rhs.r;
  temp.u = k * rhs.u;
  temp.v = k * rhs.v;
  temp.w = k * rhs.w;
  temp.E = k * rhs.E;
  return temp;
}

flow operator/(const flow& lhs, const flow& rhs) {
  flow temp;
  for (int i = 0; i < lhs.Y.size(); i++){
    temp.Y[i] = lhs.Y[i] / rhs.Y[i];
  }
  temp.r = lhs.r / rhs.r;
  temp.u = lhs.u / rhs.u;
  temp.v = lhs.v / rhs.v;
  temp.w = lhs.w / rhs.w;
  temp.E = lhs.E / rhs.E;
  return temp;
}

flow operator/(const flow& lhs, const double& k) {
  flow temp;
  for (int i = 0; i < lhs.Y.size(); i++){
    temp.Y[i] = lhs.Y[i] / k;
  }
  temp.r = lhs.r / k;
  temp.u = lhs.u / k;
  temp.v = lhs.v / k;
  temp.w = lhs.w / k;
  temp.E = lhs.E / k;
  return temp;
}

flow operator/(const double& k, const flow& rhs) {
  flow temp;
  for (int i = 0; i < rhs.Y.size(); i++){
    temp.Y[i] = k / rhs.Y[i];
  }
  temp.r = k / rhs.r;
  temp.u = k / rhs.u;
  temp.v = k / rhs.v;
  temp.w = k / rhs.w;
  temp.E = k / rhs.E;
  return temp;
}

#endif
