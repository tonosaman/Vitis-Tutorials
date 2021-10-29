/****************************************************************
# Support
GitHub issues will be used for tracking requests and bugs. For questions go to [forums.xilinx.com](http://forums.xilinx.com/).

# License
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License.
You may obtain a copy of the License at [http://www.apache.org/licenses/LICENSE-2.0]( http://www.apache.org/licenses/LICENSE-2.0 )

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.

<p align="center"><sup>XD0xx | &copy; Copyright 2021 Xilinx, Inc.</sup></p>
****************************************************************/

#ifndef __C1B_H__
  #define __C1B_H__

  // SIMD matrix of coefficients for IIR filter stage 1
  alignas(16) const float C1b[96] = {

    -2.75248738205893628272491e-01,	// Ky0_ym2
    -2.54561029884207257190099e-01,	// Ky1_ym2
    -1.59666342825007995243070e-01,	// Ky2_ym2
    -7.75982105934880789233077e-02,	// Ky3_ym2
    -2.78179659792038916354961e-02,	// Ky4_ym2
    -4.36835677348985148421567e-03,	// Ky5_ym2
    +3.61682916566315355855199e-03,	// Ky6_ym2
    +4.54737280260741026649551e-03,	// Ky7_ym2

    +9.24839952195488645969590e-01,	// Ky0_ym1
    +5.80080198971060112533848e-01,	// Ky1_ym1
    +2.81920313601737526632007e-01,	// Ky2_ym1
    +1.01064826529360093920751e-01,	// Ky3_ym1
    +1.58705787425706575100026e-02,	// Ky4_ym1
    -1.31402206936101044465470e-02,	// Ky5_ym1
    -1.65209578516063923525614e-02,	// Ky6_ym1
    -1.16624127040401842636541e-02,	// Ky7_ym1

    +9.03608125621924163084486e-02,	// Ky0_xm2
    +8.35692895703635391102537e-02,	// Ky1_xm2
    +5.24165181302632399162889e-02,	// Ky2_xm2
    +2.54745486148411082183429e-02,	// Ky3_xm2
    +9.13229984664999834553800e-03,	// Ky4_xm2
    +1.43407839101094267998671e-03,	// Ky5_xm2
    -1.18736101912114461361114e-03,	// Ky6_xm2
    -1.49284717577688615629261e-03,	// Ky7_xm2

    +1.69687160886020149686004e-01,	// Ky0_xm1
    +2.47294278324207472685714e-01,	// Ky1_xm1
    +1.82001451619960397110276e-01,	// Ky2_xm1
    +1.00254775741438525993310e-01,	// Ky3_xm1
    +4.26239520940463537113096e-02,	// Ky4_xm1
    +1.18253332950948378265998e-02,	// Ky5_xm1
    -7.95648351903486313746461e-04,	// Ky6_xm1
    -3.99075545207783557999370e-03,	// Ky7_xm1

    +9.03608125621924163084486e-02,	// Ky0_x0
    +2.53256450456383674918470e-01,	// Ky1_x0
    +2.99710796454470740357579e-01,	// Ky2_x0
    +2.07476000234801505328619e-01,	// Ky3_x0
    +1.09387075588088536481912e-01,	// Ky4_x0
    +4.40580304850572979091794e-02,	// Ky5_x0
    +1.06379722759736925624674e-02,	// Ky6_x0
    -2.28849552768037268687951e-03,	// Ky7_x0

    +0.00000000000000000000000e+00,	// Ky0_x1
    +9.03608125621924163084486e-02,	// Ky1_x1
    +2.53256450456383674918470e-01,	// Ky2_x1
    +2.99710796454470740357579e-01,	// Ky3_x1
    +2.07476000234801505328619e-01,	// Ky4_x1
    +1.09387075588088536481912e-01,	// Ky5_x1
    +4.40580304850572979091794e-02,	// Ky6_x1
    +1.06379722759736925624674e-02,	// Ky7_x1

    +0.00000000000000000000000e+00,	// Ky0_x2
    +0.00000000000000000000000e+00,	// Ky1_x2
    +9.03608125621924163084486e-02,	// Ky2_x2
    +2.53256450456383674918470e-01,	// Ky3_x2
    +2.99710796454470740357579e-01,	// Ky4_x2
    +2.07476000234801505328619e-01,	// Ky5_x2
    +1.09387075588088536481912e-01,	// Ky6_x2
    +4.40580304850572979091794e-02,	// Ky7_x2

    +0.00000000000000000000000e+00,	// Ky0_x3
    +0.00000000000000000000000e+00,	// Ky1_x3
    +0.00000000000000000000000e+00,	// Ky2_x3
    +9.03608125621924163084486e-02,	// Ky3_x3
    +2.53256450456383674918470e-01,	// Ky4_x3
    +2.99710796454470740357579e-01,	// Ky5_x3
    +2.07476000234801505328619e-01,	// Ky6_x3
    +1.09387075588088536481912e-01,	// Ky7_x3

    +0.00000000000000000000000e+00,	// Ky0_x4
    +0.00000000000000000000000e+00,	// Ky1_x4
    +0.00000000000000000000000e+00,	// Ky2_x4
    +0.00000000000000000000000e+00,	// Ky3_x4
    +9.03608125621924163084486e-02,	// Ky4_x4
    +2.53256450456383674918470e-01,	// Ky5_x4
    +2.99710796454470740357579e-01,	// Ky6_x4
    +2.07476000234801505328619e-01,	// Ky7_x4

    +0.00000000000000000000000e+00,	// Ky0_x5
    +0.00000000000000000000000e+00,	// Ky1_x5
    +0.00000000000000000000000e+00,	// Ky2_x5
    +0.00000000000000000000000e+00,	// Ky3_x5
    +0.00000000000000000000000e+00,	// Ky4_x5
    +9.03608125621924163084486e-02,	// Ky5_x5
    +2.53256450456383674918470e-01,	// Ky6_x5
    +2.99710796454470740357579e-01,	// Ky7_x5

    +0.00000000000000000000000e+00,	// Ky0_x6
    +0.00000000000000000000000e+00,	// Ky1_x6
    +0.00000000000000000000000e+00,	// Ky2_x6
    +0.00000000000000000000000e+00,	// Ky3_x6
    +0.00000000000000000000000e+00,	// Ky4_x6
    +0.00000000000000000000000e+00,	// Ky5_x6
    +9.03608125621924163084486e-02,	// Ky6_x6
    +2.53256450456383674918470e-01,	// Ky7_x6

    +0.00000000000000000000000e+00,	// Ky0_x7
    +0.00000000000000000000000e+00,	// Ky1_x7
    +0.00000000000000000000000e+00,	// Ky2_x7
    +0.00000000000000000000000e+00,	// Ky3_x7
    +0.00000000000000000000000e+00,	// Ky4_x7
    +0.00000000000000000000000e+00,	// Ky5_x7
    +0.00000000000000000000000e+00,	// Ky6_x7
    +9.03608125621924163084486e-02	// Ky7_x7

  };

#endif // __C1B_H__
