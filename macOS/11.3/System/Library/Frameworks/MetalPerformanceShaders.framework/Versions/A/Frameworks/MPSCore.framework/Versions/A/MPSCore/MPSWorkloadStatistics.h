/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Versions/A/Frameworks/MPSCore.framework/Versions/A/MPSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MPSWorkloadStatistics : NSObject {

	double _float32Ops;
	double _float16Ops;
	double _integerOps;
	double _deviceMemoryBytesRead;
	double _deviceMemoryBytesWrite;
	double _threadgroupMemoryBytesRead;
	double _threadgroupMemoryBytesWrite;

}

@property (assign,nonatomic) double float32Ops;                               //@synthesize float32Ops=_float32Ops - In the implementation block
@property (assign,nonatomic) double float16Ops;                               //@synthesize float16Ops=_float16Ops - In the implementation block
@property (assign,nonatomic) double integerOps;                               //@synthesize integerOps=_integerOps - In the implementation block
@property (assign,nonatomic) double deviceMemoryBytesRead;                    //@synthesize deviceMemoryBytesRead=_deviceMemoryBytesRead - In the implementation block
@property (assign,nonatomic) double deviceMemoryBytesWrite;                   //@synthesize deviceMemoryBytesWrite=_deviceMemoryBytesWrite - In the implementation block
@property (assign,nonatomic) double threadgroupMemoryBytesRead;               //@synthesize threadgroupMemoryBytesRead=_threadgroupMemoryBytesRead - In the implementation block
@property (assign,nonatomic) double threadgroupMemoryBytesWrite;              //@synthesize threadgroupMemoryBytesWrite=_threadgroupMemoryBytesWrite - In the implementation block
+(id)new;
-(void)dealloc;
-(id)init;
-(double)float32Ops;
-(void)setFloat32Ops:(double)arg1 ;
-(double)float16Ops;
-(void)setFloat16Ops:(double)arg1 ;
-(double)integerOps;
-(void)setIntegerOps:(double)arg1 ;
-(double)deviceMemoryBytesRead;
-(void)setDeviceMemoryBytesRead:(double)arg1 ;
-(double)deviceMemoryBytesWrite;
-(void)setDeviceMemoryBytesWrite:(double)arg1 ;
-(double)threadgroupMemoryBytesRead;
-(void)setThreadgroupMemoryBytesRead:(double)arg1 ;
-(double)threadgroupMemoryBytesWrite;
-(void)setThreadgroupMemoryBytesWrite:(double)arg1 ;
@end

