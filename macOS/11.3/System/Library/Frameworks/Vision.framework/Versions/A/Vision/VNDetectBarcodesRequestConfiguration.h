/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@class NSArray, NSString;

@interface VNDetectBarcodesRequestConfiguration : VNImageBasedRequestConfiguration {

	char _stopAtFirstPyramidWith2DCode;
	NSArray* _symbologies;
	NSString* _locateMode;

}

@property (nonatomic,copy) NSArray * symbologies;                            //@synthesize symbologies=_symbologies - In the implementation block
@property (nonatomic,copy) NSString * locateMode;                            //@synthesize locateMode=_locateMode - In the implementation block
@property (assign,nonatomic) char stopAtFirstPyramidWith2DCode;              //@synthesize stopAtFirstPyramidWith2DCode=_stopAtFirstPyramidWith2DCode - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
-(NSArray *)symbologies;
-(void)setSymbologies:(NSArray *)arg1 ;
-(NSString *)locateMode;
-(void)setLocateMode:(NSString *)arg1 ;
-(char)stopAtFirstPyramidWith2DCode;
-(void)setStopAtFirstPyramidWith2DCode:(char)arg1 ;
@end
