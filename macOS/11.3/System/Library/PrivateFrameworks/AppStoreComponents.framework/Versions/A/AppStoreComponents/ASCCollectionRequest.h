/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/Versions/A/AppStoreComponents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ASCCollectionRequest : NSObject <NSCopying, NSSecureCoding> {

	NSString* _id;
	NSString* _kind;
	NSString* _context;
	long long _limit;

}

@property (nonatomic,copy,readonly) NSString * id;                   //@synthesize id=_id - In the implementation block
@property (nonatomic,copy,readonly) NSString * kind;                 //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy,readonly) NSString * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) long long limit;                      //@synthesize limit=_limit - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)limit;
-(NSString *)kind;
-(NSString *)context;
-(NSString *)id;
-(id)initWithID:(id)arg1 kind:(id)arg2 context:(id)arg3 limit:(long long)arg4 ;
@end
