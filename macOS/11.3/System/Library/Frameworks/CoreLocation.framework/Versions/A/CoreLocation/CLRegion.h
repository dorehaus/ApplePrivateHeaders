/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/Versions/A/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLRegionInternal, NSString;

@interface CLRegion : NSObject <NSCopying, NSSecureCoding> {

	CLRegionInternal* _internal;
	char _conservativeEntry;
	char _emergency;
	int _referenceFrame;
	NSString* _onBehalfOfBundleId;

}

@property (nonatomic,readonly) SCD_Struct_CL11 clientRegion; 
@property (nonatomic,copy) NSString * onBehalfOfBundleId;                  //@synthesize onBehalfOfBundleId=_onBehalfOfBundleId - In the implementation block
@property (assign,nonatomic) char conservativeEntry;                       //@synthesize conservativeEntry=_conservativeEntry - In the implementation block
@property (assign,nonatomic) int referenceFrame;                           //@synthesize referenceFrame=_referenceFrame - In the implementation block
@property (assign,nonatomic) char emergency;                               //@synthesize emergency=_emergency - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D center; 
@property (nonatomic,readonly) double radius; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (assign,nonatomic) char notifyOnEntry; 
@property (assign,nonatomic) char notifyOnExit; 
+(char)supportsSecureCoding;
-(SCD_Struct_CL11)clientRegion;
-(id)initWithClientRegion:(SCD_Struct_CL11)arg1 ;
-(id)initCircularRegionWithCenter:(CLLocationCoordinate2D)arg1 radius:(double)arg2 identifier:(id)arg3 ;
-(void)_encodeWithCoder:(id)arg1 ;
-(NSString *)onBehalfOfBundleId;
-(char)conservativeEntry;
-(void)setConservativeEntry:(char)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(CLLocationCoordinate2D)center;
-(int)referenceFrame;
-(double)radius;
-(void)setNotifyOnEntry:(char)arg1 ;
-(void)setNotifyOnExit:(char)arg1 ;
-(char)notifyOnEntry;
-(char)notifyOnExit;
-(void)setReferenceFrame:(int)arg1 ;
-(char)containsCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)setEmergency:(char)arg1 ;
-(char)emergency;
-(id)_initWithCoder:(id)arg1 ;
-(void)setOnBehalfOfBundleId:(NSString *)arg1 ;
@end

