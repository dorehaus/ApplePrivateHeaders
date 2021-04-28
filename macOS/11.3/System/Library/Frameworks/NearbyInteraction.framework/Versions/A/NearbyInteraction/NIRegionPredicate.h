/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NearbyInteraction.framework/Versions/A/NearbyInteraction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NearbyInteraction/NearbyInteraction-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NIRegionPredicate : NSObject <NSCopying, NSSecureCoding> {

	float _radius;
	NSString* _name;
	long long _preferredUpdateRate;

}

@property (readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (readonly) float radius;                             //@synthesize radius=_radius - In the implementation block
@property (assign) long long preferredUpdateRate;              //@synthesize preferredUpdateRate=_preferredUpdateRate - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)radius;
-(id)descriptionInternal;
-(id)initWithName:(id)arg1 radius:(float)arg2 preferredUpdateRate:(long long)arg3 ;
-(long long)preferredUpdateRate;
-(id)initWithName:(id)arg1 radius:(float)arg2 ;
-(void)setPreferredUpdateRate:(long long)arg1 ;
@end

