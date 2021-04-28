/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/Versions/A/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CalLogEnvelope : NSObject {

	NSString* _logName;
	int _level;
	NSString* _message;
	int _processID;
	NSString* _processName;
	unsigned _machPort;
	double _timestamp;
	NSString* _function;

}

@property (nonatomic,retain) NSString * logName;                  //@synthesize logName=_logName - In the implementation block
@property (assign,nonatomic) int level;                           //@synthesize level=_level - In the implementation block
@property (nonatomic,retain) NSString * message;                  //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) int processID;                       //@synthesize processID=_processID - In the implementation block
@property (nonatomic,retain) NSString * processName;              //@synthesize processName=_processName - In the implementation block
@property (assign,nonatomic) unsigned machPort;                   //@synthesize machPort=_machPort - In the implementation block
@property (assign,nonatomic) double timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSString * function;                 //@synthesize function=_function - In the implementation block
-(id)description;
-(id)init;
-(unsigned)machPort;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)function;
-(int)level;
-(NSString *)processName;
-(void)setProcessName:(NSString *)arg1 ;
-(double)timestamp;
-(void)setLevel:(int)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(NSString *)logName;
-(int)processID;
-(id)initWithLogName:(id)arg1 level:(int)arg2 message:(id)arg3 ;
-(void)setProcessID:(int)arg1 ;
-(void)setMachPort:(unsigned)arg1 ;
-(void)setFunction:(NSString *)arg1 ;
-(void)setLogName:(NSString *)arg1 ;
@end
