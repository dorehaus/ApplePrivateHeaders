/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSNumber;

@interface PKFelicaGreenCarTicket : NSObject <NSSecureCoding> {

	BOOL _refunded;
	NSData* _originStation;
	NSData* _destinationStation;
	NSNumber* _validityStartDate;

}

@property (nonatomic,copy,readonly) NSData * originStation;                    //@synthesize originStation=_originStation - In the implementation block
@property (nonatomic,copy,readonly) NSData * destinationStation;               //@synthesize destinationStation=_destinationStation - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * validityStartDate;              //@synthesize validityStartDate=_validityStartDate - In the implementation block
@property (getter=isRefunded,nonatomic,readonly) BOOL refunded;                //@synthesize refunded=_refunded - In the implementation block
+(char)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSNumber *)validityStartDate;
-(NSData *)originStation;
-(NSData *)destinationStation;
-(BOOL)isRefunded;
@end
