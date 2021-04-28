/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/Versions/A/InstallCoordination
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InstallCoordination/InstallCoordination-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSUUID;

@interface IXAppInstallCoordinatorSeed : NSObject <NSSecureCoding, NSCopying> {

	unsigned _creatorEUID;
	NSString* _bundleID;
	NSUUID* _uniqueIdentifier;
	unsigned long long _creator;
	unsigned long long _intent;

}

@property (nonatomic,copy) NSString * bundleID;                       //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSUUID * uniqueIdentifier;               //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long creator;              //@synthesize creator=_creator - In the implementation block
@property (assign,nonatomic) unsigned creatorEUID;                    //@synthesize creatorEUID=_creatorEUID - In the implementation block
@property (assign,nonatomic) unsigned long long intent;               //@synthesize intent=_intent - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(NSUUID *)uniqueIdentifier;
-(unsigned long long)intent;
-(void)setUniqueIdentifier:(NSUUID *)arg1 ;
-(void)setCreator:(unsigned long long)arg1 ;
-(unsigned long long)creator;
-(void)setIntent:(unsigned long long)arg1 ;
-(unsigned)creatorEUID;
-(void)setCreatorEUID:(unsigned)arg1 ;
@end

