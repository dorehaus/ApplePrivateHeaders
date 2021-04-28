/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IdentityLookup.framework/Versions/A/IdentityLookup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IdentityLookup/ILCommunication.h>

@class NSString;

@interface ILMessageCommunication : ILCommunication {

	NSString* _messageBody;

}

@property (nonatomic,copy,readonly) NSString * messageBody;              //@synthesize messageBody=_messageBody - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)messageBody;
-(char)isEqualToMessageCommunication:(id)arg1 ;
-(id)initWithSender:(id)arg1 dateReceived:(id)arg2 messageBody:(id)arg3 ;
@end

