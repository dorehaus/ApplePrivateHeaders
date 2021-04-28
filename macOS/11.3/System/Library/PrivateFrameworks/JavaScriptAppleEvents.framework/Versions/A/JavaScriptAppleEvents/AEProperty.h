/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/JavaScriptAppleEvents.framework/Versions/A/JavaScriptAppleEvents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AEProperty : NSObject {

	char _readOnly;
	char _writeOnly;
	unsigned _code;
	unsigned _classCode;
	NSString* _name;
	NSString* _displayName;
	NSString* _type;

}

@property (retain) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (assign) unsigned code;                       //@synthesize code=_code - In the implementation block
@property (assign) unsigned classCode;                  //@synthesize classCode=_classCode - In the implementation block
@property (retain) NSString * type;                     //@synthesize type=_type - In the implementation block
@property (assign) char readOnly;                       //@synthesize readOnly=_readOnly - In the implementation block
@property (assign) char writeOnly;                      //@synthesize writeOnly=_writeOnly - In the implementation block
+(id)propertyWithName:(id)arg1 displayName:(id)arg2 type:(id)arg3 code:(unsigned)arg4 classCode:(unsigned)arg5 readOnly:(char)arg6 writeOnly:(char)arg7 ;
-(NSString *)name;
-(void)setType:(NSString *)arg1 ;
-(unsigned)code;
-(NSString *)type;
-(void)setName:(NSString *)arg1 ;
-(NSString *)displayName;
-(void)setCode:(unsigned)arg1 ;
-(unsigned)classCode;
-(void)setDisplayName:(NSString *)arg1 ;
-(char)readOnly;
-(void)setReadOnly:(char)arg1 ;
-(void)setClassCode:(unsigned)arg1 ;
-(void)setWriteOnly:(char)arg1 ;
-(char)writeOnly;
-(id)initWithName:(id)arg1 displayName:(id)arg2 type:(id)arg3 code:(unsigned)arg4 classCode:(unsigned)arg5 readOnly:(char)arg6 writeOnly:(char)arg7 ;
@end
