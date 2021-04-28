/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Versions/A/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ML3OrderingTerm : NSObject <NSCopying, NSSecureCoding> {

	int _direction;
	NSString* _property;
	NSString* _collation;

}

@property (nonatomic,readonly) NSString * property;               //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) int direction;                     //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) NSString * collation;              //@synthesize collation=_collation - In the implementation block
+(char)supportsSecureCoding;
+(id)orderingTermWithProperty:(id)arg1 direction:(int)arg2 ;
+(id)orderingTermWithProperty:(id)arg1 ;
+(id)reversedTerms:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)direction;
-(NSString *)property;
-(NSString *)collation;
-(id)initWithProperty:(id)arg1 ;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(id)initWithProperty:(id)arg1 direction:(int)arg2 collation:(id)arg3 ;
-(id)initWithProperty:(id)arg1 direction:(int)arg2 ;
@end

