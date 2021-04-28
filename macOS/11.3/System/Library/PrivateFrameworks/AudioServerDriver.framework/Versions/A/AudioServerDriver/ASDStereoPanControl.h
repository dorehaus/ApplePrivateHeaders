/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/Versions/A/AudioServerDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <AudioServerDriver/ASDControl.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface ASDStereoPanControl : ASDControl {

	float _value;
	NSObject*<OS_dispatch_queue> _valueQueue;
	unsigned _leftPanChannel;
	unsigned _rightPanChannel;
	char _settable;

}

@property (assign,nonatomic) float value; 
@property (assign,nonatomic) unsigned leftPanChannel; 
@property (assign,nonatomic) unsigned rightPanChannel; 
@property (getter=isSettable,nonatomic,readonly) char settable;              //@synthesize settable=_settable - In the implementation block
-(id)initWithElement:(unsigned)arg1 inScope:(unsigned)arg2 withPlugin:(id)arg3 ;
-(id)initWithElement:(unsigned)arg1 inScope:(unsigned)arg2 withPlugin:(id)arg3 andObjectClassID:(unsigned)arg4 ;
-(unsigned)dataSizeForProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 andQualifierData:(const void*)arg3 ;
-(char)getProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned*)arg4 andData:(void*)arg5 forClient:(int)arg6 ;
-(id)driverClassName;
-(char)setProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned)arg4 andData:(const void*)arg5 forClient:(int)arg6 ;
-(id)initWithValue:(float)arg1 leftPanChannel:(unsigned)arg2 rightPanChannel:(unsigned)arg3 isSettable:(char)arg4 forElement:(unsigned)arg5 inScope:(unsigned)arg6 withPlugin:(id)arg7 andObjectClassID:(unsigned)arg8 ;
-(unsigned)leftPanChannel;
-(unsigned)rightPanChannel;
-(void)setPanChannel:(unsigned)arg1 isLeft:(char)arg2 ;
-(id)initWithValue:(float)arg1 leftPanChannel:(unsigned)arg2 rightPanChannel:(unsigned)arg3 isSettable:(char)arg4 forElement:(unsigned)arg5 inScope:(unsigned)arg6 withPlugin:(id)arg7 ;
-(void)setLeftPanChannel:(unsigned)arg1 ;
-(void)setRightPanChannel:(unsigned)arg1 ;
-(float)value;
-(void)setValue:(float)arg1 ;
-(char)hasProperty:(const AudioObjectPropertyAddress*)arg1 ;
-(char)isPropertySettable:(const AudioObjectPropertyAddress*)arg1 ;
-(unsigned)baseClass;
-(id)initWithPlugin:(id)arg1 ;
-(char)isSettable;
-(char)changeValue:(float)arg1 ;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(char)arg2 ;
@end
