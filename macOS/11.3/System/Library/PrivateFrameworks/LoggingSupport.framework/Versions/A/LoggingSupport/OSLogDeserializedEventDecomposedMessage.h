/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/Versions/A/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoggingSupport/OSLogEventDecomposedMessage.h>

@class NSDictionary, NSArray;

@interface OSLogDeserializedEventDecomposedMessage : OSLogEventDecomposedMessage {

	NSDictionary* _backingDict;
	NSArray* _segments;

}

@property (nonatomic,readonly) NSArray * segments;                      //@synthesize segments=_segments - In the implementation block
@property (nonatomic,readonly) NSDictionary * backingDict;              //@synthesize backingDict=_backingDict - In the implementation block
-(id)initWithDict:(id)arg1 metadata:(id)arg2 ;
-(NSDictionary *)backingDict;
-(unsigned long long)state;
-(NSArray *)segments;
-(unsigned long long)placeholderCount;
-(id)literalPrefixAtIndex:(unsigned long long)arg1 ;
-(id)placeholderAtIndex:(unsigned long long)arg1 ;
-(id)argumentAtIndex:(unsigned long long)arg1 ;
@end
