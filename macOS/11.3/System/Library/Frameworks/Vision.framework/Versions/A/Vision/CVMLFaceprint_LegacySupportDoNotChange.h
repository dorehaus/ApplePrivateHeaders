/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface CVMLFaceprint_LegacySupportDoNotChange : NSObject <NSSecureCoding> {

	unsigned _platform;
	unsigned _profile;
	NSData* _faceprint;
	NSString* _key;
	NSString* _faceprintInputPath;

}

@property (retain) NSData * faceprint;                       //@synthesize faceprint=_faceprint - In the implementation block
@property (copy) NSString * key;                             //@synthesize key=_key - In the implementation block
@property (assign) unsigned platform;                        //@synthesize platform=_platform - In the implementation block
@property (assign) unsigned profile;                         //@synthesize profile=_profile - In the implementation block
@property (copy) NSString * faceprintInputPath;              //@synthesize faceprintInputPath=_faceprintInputPath - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)platform;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(void)setPlatform:(unsigned)arg1 ;
-(void)setProfile:(unsigned)arg1 ;
-(unsigned)profile;
-(NSData *)faceprint;
-(void)setFaceprint:(NSData *)arg1 ;
-(NSString *)faceprintInputPath;
-(void)setFaceprintInputPath:(NSString *)arg1 ;
@end

