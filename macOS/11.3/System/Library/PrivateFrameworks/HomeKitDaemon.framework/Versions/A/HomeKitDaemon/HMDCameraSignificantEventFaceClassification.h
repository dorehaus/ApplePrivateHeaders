/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSUUID, NSString;

@interface HMDCameraSignificantEventFaceClassification : HMFObject <NSCopying, NSMutableCopying> {

	NSUUID* _UUID;
	NSUUID* _personManagerUUID;
	NSUUID* _personUUID;
	NSString* _personName;
	NSUUID* _unassociatedFaceCropUUID;

}

@property (copy) NSUUID * personUUID;                              //@synthesize personUUID=_personUUID - In the implementation block
@property (copy) NSString * personName;                            //@synthesize personName=_personName - In the implementation block
@property (copy) NSUUID * unassociatedFaceCropUUID;                //@synthesize unassociatedFaceCropUUID=_unassociatedFaceCropUUID - In the implementation block
@property (copy,readonly) NSUUID * UUID;                           //@synthesize UUID=_UUID - In the implementation block
@property (copy,readonly) NSUUID * personManagerUUID;              //@synthesize personManagerUUID=_personManagerUUID - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSUUID *)UUID;
-(NSUUID *)personUUID;
-(void)setPersonUUID:(NSUUID *)arg1 ;
-(id)attributeDescriptions;
-(NSUUID *)unassociatedFaceCropUUID;
-(void)setUnassociatedFaceCropUUID:(NSUUID *)arg1 ;
-(NSUUID *)personManagerUUID;
-(NSString *)personName;
-(id)initWithUUID:(id)arg1 personManagerUUID:(id)arg2 ;
-(void)setPersonName:(NSString *)arg1 ;
@end
