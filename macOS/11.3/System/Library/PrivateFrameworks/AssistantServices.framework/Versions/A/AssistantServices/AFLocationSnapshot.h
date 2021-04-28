/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFContextSnapshot.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/AFDictionaryConvertible.h>

@class NSNumber, NSString;

@interface AFLocationSnapshot : NSObject <AFContextSnapshot, NSCopying, NSSecureCoding, AFDictionaryConvertible> {

	char _preciseLocationEnabled;
	NSNumber* _latitude;
	NSNumber* _longitude;
	NSNumber* _altitude;
	NSNumber* _direction;
	NSNumber* _speed;
	NSNumber* _verticalAccuracy;
	NSNumber* _horizontalAccuracy;
	long long _accessState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSNumber * latitude;                        //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * longitude;                       //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * altitude;                        //@synthesize altitude=_altitude - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * direction;                       //@synthesize direction=_direction - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * speed;                           //@synthesize speed=_speed - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * verticalAccuracy;                //@synthesize verticalAccuracy=_verticalAccuracy - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * horizontalAccuracy;              //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (nonatomic,readonly) char preciseLocationEnabled;                     //@synthesize preciseLocationEnabled=_preciseLocationEnabled - In the implementation block
@property (nonatomic,readonly) long long accessState;                           //@synthesize accessState=_accessState - In the implementation block
+(char)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)direction;
-(NSNumber *)speed;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSNumber *)latitude;
-(NSNumber *)longitude;
-(NSNumber *)altitude;
-(NSNumber *)horizontalAccuracy;
-(NSNumber *)verticalAccuracy;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(char)preciseLocationEnabled;
-(id)buildDictionaryRepresentation;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)initWithSerializedBackingStore:(id)arg1 ;
-(id)ad_shortDescription;
-(id)serializedBackingStore;
-(long long)accessState;
-(id)initWithLatitude:(id)arg1 longitude:(id)arg2 altitude:(id)arg3 direction:(id)arg4 speed:(id)arg5 verticalAccuracy:(id)arg6 horizontalAccuracy:(id)arg7 preciseLocationEnabled:(char)arg8 accessState:(long long)arg9 ;
-(id)initWithSetRequestOrigin:(id)arg1 ;
-(id)ace_setRequestOrigin;
@end

