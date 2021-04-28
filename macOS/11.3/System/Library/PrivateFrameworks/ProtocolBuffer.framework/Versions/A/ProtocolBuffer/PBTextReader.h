/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/Versions/A/ProtocolBuffer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCharacterSet, NSString, NSMutableDictionary;

@interface PBTextReader : NSObject {

	NSCharacterSet* _whitespaceAndNewlineCharacterSet;
	NSCharacterSet* _tagNameCharacterSet;
	NSCharacterSet* _nonHexDigitCharacterSet;
	unsigned long long _pos;
	unsigned long long _length;
	NSString* _string;
	NSMutableDictionary* _objects;
	NSMutableDictionary* _cachedObjectTypes;

}
-(void)dealloc;
-(id)init;
-(id)readMessageType:(Class)arg1 fromString:(id)arg2 ;
@end

