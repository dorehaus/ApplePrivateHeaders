/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Versions/A/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError, NSNumber;

@interface ASDPurchaseResult : NSObject <NSCopying, NSSecureCoding> {

	char _success;
	NSError* _error;
	NSNumber* _itemID;

}

@property (retain) NSNumber * itemID;                        //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,readonly) char success;                 //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
+(char)supportsSecureCoding;
+(id)failedToPurchaseItemID:(id)arg1 withError:(id)arg2 ;
+(id)successfullyPurchasedItemID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(NSNumber *)itemID;
-(char)success;
-(void)setItemID:(NSNumber *)arg1 ;
-(id)initWithSuccess:(char)arg1 error:(id)arg2 ;
@end

