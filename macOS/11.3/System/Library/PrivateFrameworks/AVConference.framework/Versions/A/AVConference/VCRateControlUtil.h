/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VCRateControlUtil : NSObject
+(char)prepareOWRDList:(SCD_Struct_VC56*)arg1 owrd:(double)arg2 time:(double)arg3 config:(VCRateControlAlgorithmConfig*)arg4 ;
+(void)calculateNOWRDWithOWRDList:(SCD_Struct_VC56*)arg1 config:(VCRateControlAlgorithmConfig*)arg2 isInitialRampUp:(char)arg3 ;
+(void)calculateNOWRDShortWithOWRDList:(SCD_Struct_VC56*)arg1 config:(VCRateControlAlgorithmConfig*)arg2 isInitialRampUp:(char)arg3 ;
+(void)calculateNOWRDAccWithOWRDList:(SCD_Struct_VC56*)arg1 config:(VCRateControlAlgorithmConfig*)arg2 ;
+(double)calculateNOWRDWithDuration:(double)arg1 owrdList:(SCD_Struct_VC56*)arg2 historySize:(unsigned)arg3 minHistorySize:(unsigned)arg4 initalRampUpReadyDuration:(double)arg5 isInitialRampUp:(char)arg6 ;
+(char)calculateCongestionMetricsFromOWRDList:(SCD_Struct_VC56*)arg1 owrd:(double)arg2 time:(double)arg3 config:(VCRateControlAlgorithmConfig*)arg4 isInitialRampUp:(char)arg5 ;
@end

