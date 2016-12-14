#ifndef VECDEF_H_
#define VECDEF_H_

#include "structdef.h"

typedef std::vector<std::vector<std::vector<int>>> int3D;
typedef std::vector<std::vector<std::vector<double>>> double3D;
typedef std::vector<std::vector<std::vector<flow>>> flow3D;

void resizeflow3D(flow3D a, int nd){
  a.resize(nd);
  for (int i = 0; i < nd; i++){
    a[i].resize(nd);
    for (int j = 0; j < nd; j++){
      a[i][j].resize(nd);
    }
  }
}

void resizeasymflow3D(flow3D a, int ndx, int ndy, int ndz){
  a.resize(ndx);
  for (int i = 0; i < ndx; i++){
    a[i].resize(ndy);
    for (int j = 0; j < ndy; j++){
      a[i][j].resize(ndz);
    }
  }
}

void resizedouble3D(double3D a, int nd){
  a.resize(nd);
  for (int i = 0; i < nd; i++){
    a[i].resize(nd);
    for (int j = 0; j < nd; j++){
      a[i][j].resize(nd);
    }
  }
}


template<typename T>
void vecadd3D(T res, T lhs, T rhs, int dim){
  for(int i = 0; i < dim; i++){
    for(int j = 0; j < dim; j++){
      for(int k = 0; k < dim; k++){
        res[i][j][k] = lhs[i][j][k] + rhs[i][j][k];
      }
    }
  }
}

template<typename T>
void vecdiv3D(T res, T lhs, double rhs, int dim){
  for(int i = 0; i < dim; i++){
    for(int j = 0; j < dim; j++){
      for(int k = 0; k < dim; k++){
        res[i][j][k] = lhs[i][j][k] / rhs;
      }
    }
  }
}

template<typename T>
void vecselfadd3D(T lhs, T rhs, int dim){
  for(int i = 0; i < dim; i++){
    for(int j = 0; j < dim; j++){
      for(int k = 0; k < dim; k++){
        lhs[i][j][k] += rhs[i][j][k];
      }
    }
  }
}

template<typename T>
void vecselfsub3D(T lhs, T rhs, int dim){
  for(int i = 0; i < dim; i++){
    for(int j = 0; j < dim; j++){
      for(int k = 0; k < dim; k++){
        lhs[i][j][k] -= rhs[i][j][k];
      }
    }
  }
}

template<typename T>
void vecselfmul3D(T lhs, double rhs, int dim){
  for(int i = 0; i < dim; i++){
    for(int j = 0; j < dim; j++){
      for(int k = 0; k < dim; k++){
        lhs[i][j][k] *= rhs;
      }
    }
  }
}

template<typename T>
void vecselfdiv3D(T lhs, double rhs, int dim){
  for(int i = 0; i < dim; i++){
    for(int j = 0; j < dim; j++){
      for(int k = 0; k < dim; k++){
        lhs[i][j][k] /= rhs;
      }
    }
  }
}

template<typename T>
void vecselfadd4D(T lhs[], T rhs[], int dim){
  for(int n = 0; n < 3; n++){
    for(int i = 0; i < dim; i++){
      for(int j = 0; j < dim; j++){
        for(int k = 0; k < dim; k++){
          lhs[n][i][j][k] += rhs[n][i][j][k];
        }
      }
    }
  }
}

template<typename T>
void vecselfsub4D(T lhs[], T rhs[], int dim){
  for(int n = 0; n < 3; n++){
    for(int i = 0; i < dim; i++){
      for(int j = 0; j < dim; j++){
        for(int k = 0; k < dim; k++){
          lhs[n][i][j][k] -= rhs[n][i][j][k];
        }
      }
    }
  }
}

#endif
