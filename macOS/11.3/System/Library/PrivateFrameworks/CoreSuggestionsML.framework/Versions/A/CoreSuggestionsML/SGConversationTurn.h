/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/Versions/A/CoreSuggestionsML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestionsML/CoreSuggestionsML-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/SGConversationTurnProtocol.h>

@class NSString, NSDate;

@interface SGConversationTurn : NSObject <NSSecureCoding, NSCopying, SGConversationTurnProtocol> {

	NSString* _text;
	NSString* _senderID;
	NSDate* _timestamp;

}

@property (nonatomic,readonly) NSString * text;                  //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSString * senderID;              //@synthesize senderID=_senderID - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(NSString *)text;
-(NSString *)senderID;
-(char)isEqualToConversationTurn:(id)arg1 ;
-(id)initWithText:(id)arg1 senderID:(id)arg2 timestamp:(id)arg3 ;
@end

