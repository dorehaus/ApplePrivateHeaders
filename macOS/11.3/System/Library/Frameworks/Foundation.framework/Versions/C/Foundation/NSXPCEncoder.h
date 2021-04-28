/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSXPCCoder.h>

@protocol OS_xpc_object, NSXPCEncoderDelegate;
@class NSObject, NSXPCConnection;

@interface NSXPCEncoder : NSXPCCoder {

	NSObject*<OS_xpc_object> _oolObjects;
	NSXPCConnection* _connection;
	CFDictionaryRef _replacedByDelegateObjects;
	id<NSXPCEncoderDelegate> _delegate;
	SCD_Struct_NS87* _encoder;
	unsigned long long _genericIndex;
	char _topLevelDictionary;
	char _finished;
	char _askForReplacement;

}

@property (assign) NSXPCConnection * _connection;                  //@synthesize connection=_connection - In the implementation block
@property (assign) id<NSXPCEncoderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id)debugDescription;
-(id)init;
-(id<NSXPCEncoderDelegate>)delegate;
-(char)allowsKeyedCoding;
-(void)encodeInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(char)arg1 forKey:(id)arg2 ;
-(void)setDelegate:(id<NSXPCEncoderDelegate>)arg1 ;
-(id)connection;
-(void)encodeBytes:(const char*)arg1 length:(unsigned long long)arg2 forKey:(id)arg3 ;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(NSXPCConnection *)_connection;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(void)encodeInt:(int)arg1 forKey:(id)arg2 ;
-(void)encodeObject:(id)arg1 ;
-(void)encodeValueOfObjCType:(const char*)arg1 at:(const void*)arg2 ;
-(void)encodeDataObject:(id)arg1 ;
-(void)_encodeArrayOfObjects:(id)arg1 forKey:(id)arg2 ;
-(void)encodeConditionalObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeFloat:(float)arg1 forKey:(id)arg2 ;
-(void)encodeXPCObject:(id)arg1 forKey:(id)arg2 ;
-(void)_encodeUnkeyedObject:(id)arg1 ;
-(void)set_connection:(NSXPCConnection *)arg1 ;
-(id)initWithStackSpace:(char*)arg1 size:(unsigned long long)arg2 ;
-(void)_encodeInvocation:(id)arg1 isReply:(char)arg2 into:(id)arg3 ;
-(void)_encodeInvocationObjectArgumentsOnly:(id*)arg1 count:(unsigned long long)arg2 typeString:(const char*)arg3 selector:(SEL)arg4 isReply:(char)arg5 into:(id)arg6 ;
-(void)_startTopLevelDictionary;
-(id)_newRootXPCObject;
-(unsigned long long)_addOOLXPCObject:(id)arg1 ;
-(id)_replaceObject:(id)arg1 ;
-(void)_checkObject:(id)arg1 ;
-(void)_encodeObject:(id)arg1 ;
-(void)_encodeCString:(const char*)arg1 length:(unsigned long long)arg2 forKey:(id)arg3 ;
@end
