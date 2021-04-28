/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QCOSCPatch.h>

@class QCDatagramBroadcaster;

@interface QCOSCBroadcaster : QCOSCPatch {

	QCDatagramBroadcaster* _broadcaster;
	double _maxFrequency;
	char* _oscBuffer;

}
+(unsigned long long)stateVersionWithIdentifier:(id)arg1 ;
+(id)serializedStateKeysWithIdentifier:(id)arg1 ;
+(id)stateKeysWithIdentifier:(id)arg1 ;
+(Class)inspectorClassWithIdentifier:(id)arg1 ;
+(int)executionModeWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 ;
-(char)setState:(id)arg1 ;
-(char)setup:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(void)cleanup:(id)arg1 ;
-(void)setOscPortsConfiguration:(id)arg1 ;
-(void)_broadcasterThread:(id)arg1 ;
@end

