/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MLCompute.framework/Versions/A/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MLCDataHelper : NSObject
+(char)convertFp32toFp16:(unsigned long long)arg1 fp32Values:(float*)arg2 fp16Values:( *)arg3 ;
+(id)createDataWithFloatValue:(float)arg1 count:(unsigned long long)arg2 ;
+(void)fillData:(id)arg1 withFloatValue:(float)arg2 ;
+(char)convertFp16toFp32:(unsigned long long)arg1 fp16Values:( *)arg2 fp32Values:(float*)arg3 ;
+(char)convertOIHWtoIOHW:(id)arg1 sourceOIHW:(const void*)arg2 resultIOHW:(void*)arg3 inputFeatureChannelCount:(unsigned long long)arg4 outputFeatureChannelCount:(unsigned long long)arg5 ;
@end

