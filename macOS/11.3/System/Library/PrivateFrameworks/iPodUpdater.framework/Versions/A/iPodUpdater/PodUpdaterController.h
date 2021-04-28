/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iPodUpdater.framework/Versions/A/iPodUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PodController, Pod;

@interface PodUpdaterController : NSObject {

	int _updaterState;
	PodController* _podController;
	int _updaterError;
	unsigned _instructions;
	Pod* _currentUpdatingPod;
	char _formatAsFAT;

}
+(void)deletePod:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(int)state;
-(void)setState:(int)arg1 ;
-(float)progress;
-(unsigned)instructions;
-(int)updateError;
-(void)operationComplete:(id)arg1 ;
-(void)setOption:(int)arg1 toValue:(int)arg2 ;
-(int)getOption:(int)arg1 ;
-(id)podWithGUID:(unsigned short*)arg1 ;
-(char)isPodValid:(id)arg1 ;
-(void)setCurrentUpdatingPod:(id)arg1 ;
-(void)progressUpdate:(id)arg1 ;
-(void)progressMessage:(id)arg1 ;
-(void)operationFailed:(id)arg1 ;
@end

