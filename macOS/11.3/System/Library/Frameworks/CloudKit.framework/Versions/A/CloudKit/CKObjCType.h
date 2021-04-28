/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CKObjCType : NSObject {

	long long _code;
	NSString* _encoding;
	NSString* _name;
	NSString* _className;
	unsigned long long _size;
	unsigned long long _flags;

}

@property (nonatomic,readonly) long long code;                                                     //@synthesize code=_code - In the implementation block
@property (nonatomic,readonly) NSString * encoding;                                                //@synthesize encoding=_encoding - In the implementation block
@property (nonatomic,readonly) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * className;                                               //@synthesize className=_className - In the implementation block
@property (nonatomic,readonly) unsigned long long size;                                            //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) unsigned long long flags;                                           //@synthesize flags=_flags - In the implementation block
@property (getter=isNumber,nonatomic,readonly) char number; 
@property (getter=isIntegerNumber,nonatomic,readonly) char integerNumber; 
@property (getter=isFloatingPointNumber,nonatomic,readonly) char floatingPointNumber; 
@property (getter=isObject,nonatomic,readonly) char object; 
+(id)typeForEncoding:(const char*)arg1 ;
+(id)typeForValue:(id)arg1 ;
-(unsigned long long)flags;
-(unsigned long long)size;
-(NSString *)name;
-(long long)code;
-(NSString *)className;
-(id)initWithCode:(long long)arg1 encoding:(id)arg2 name:(id)arg3 className:(id)arg4 size:(unsigned long long)arg5 flags:(unsigned long long)arg6 ;
-(char)isNumber;
-(char)isIntegerNumber;
-(char)isFloatingPointNumber;
-(char)isObject;
-(id)objectWithBytes:(const void*)arg1 ;
-(void)getBytes:(void*)arg1 forObject:(id)arg2 ;
-(NSString *)encoding;
@end

