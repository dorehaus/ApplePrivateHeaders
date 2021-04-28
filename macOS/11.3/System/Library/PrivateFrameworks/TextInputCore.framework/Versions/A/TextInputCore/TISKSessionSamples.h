/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/Versions/A/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TISKEvent, NSMutableDictionary, NSDate, NSString, TIKeyboardLayout;

@interface TISKSessionSamples : NSObject <NSSecureCoding> {

	TISKEvent* _startTimerEvent;
	double _currentTypingStart;
	char _isEmpty;
	NSMutableDictionary* _keyedSamples;
	NSDate* _startTime;
	NSDate* _endTime;
	NSString* _identifier;
	NSString* _version;
	NSString* _inputMode;
	TIKeyboardLayout* _layout;

}

@property (nonatomic,retain) NSMutableDictionary * keyedSamples;              //@synthesize keyedSamples=_keyedSamples - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                              //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                                //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,retain) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * version;                              //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSString * inputMode;                          //@synthesize inputMode=_inputMode - In the implementation block
@property (nonatomic,retain) TIKeyboardLayout * layout;                       //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) char isEmpty;                                    //@synthesize isEmpty=_isEmpty - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(char)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)version;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(TIKeyboardLayout *)layout;
-(void)setVersion:(NSString *)arg1 ;
-(void)merge:(id)arg1 ;
-(void)setLayout:(TIKeyboardLayout *)arg1 ;
-(void)setEndTime:(NSDate *)arg1 ;
-(NSDate *)endTime;
-(void)setup;
-(NSString *)inputMode;
-(id)description:(char)arg1 ;
-(id)init:(id)arg1 endDate:(id)arg2 identifier:(id)arg3 version:(id)arg4 inputMode:(id)arg5 layout:(id)arg6 ;
-(void)startTypingTimerWithEvent:(id)arg1 ;
-(void)haltTypingTimerWithEvent:(id)arg1 ;
-(void)haltTypingTimer;
-(char)isTypingTimerHalted;
-(void)addSample:(id)arg1 forKey:(id)arg2 withPosition:(unsigned long long)arg3 ;
-(void)addSample:(id)arg1 forKey:(id)arg2 ;
-(void)addToCounterForRateMetric:(int)arg1 forKey:(id)arg2 ;
-(void)addToDurationForRateMetric:(double)arg1 forKey:(id)arg2 ;
-(id)counter:(id)arg1 ;
-(id)samples:(id)arg1 ;
-(id)samples:(id)arg1 withPosition:(unsigned long long)arg2 ;
-(id)singleMetric:(id)arg1 ;
-(id)positionalMetric:(id)arg1 ;
-(id)_roundUpToNearestHalfHour:(id)arg1 ;
-(id)_roundedSessionInterval;
-(id)generateDataForSR;
-(NSMutableDictionary *)keyedSamples;
-(void)setKeyedSamples:(NSMutableDictionary *)arg1 ;
-(void)setIsEmpty:(char)arg1 ;
@end

