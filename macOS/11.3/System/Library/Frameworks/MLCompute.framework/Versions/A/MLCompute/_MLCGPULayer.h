/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MLCompute.framework/Versions/A/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface _MLCGPULayer : NSObject {

	NSArray* _deviceOps;

}

@property (nonatomic,retain) NSArray * deviceOps;              //@synthesize deviceOps=_deviceOps - In the implementation block
+(char)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4 ;
+(char)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensors:(id)arg4 ;
-(NSArray *)deviceOps;
-(void)setDeviceOps:(NSArray *)arg1 ;
@end
