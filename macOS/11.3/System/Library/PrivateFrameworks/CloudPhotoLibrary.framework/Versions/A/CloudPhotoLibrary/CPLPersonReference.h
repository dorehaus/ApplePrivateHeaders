/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Versions/A/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CPLReference.h>

@class NSDictionary, NSString;

@interface CPLPersonReference : NSObject <NSSecureCoding, NSCopying, CPLReference> {

	NSDictionary* _extraProperties;
	NSString* _personIdentifier;

}

@property (nonatomic,copy) NSString * personIdentifier;                 //@synthesize personIdentifier=_personIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * extraProperties;              //@synthesize extraProperties=_extraProperties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)personIdentifier;
-(void)setPersonIdentifier:(NSString *)arg1 ;
-(NSDictionary *)extraProperties;
-(void)setExtraProperties:(NSDictionary *)arg1 ;
-(id)initWithSerializedString:(id)arg1 ;
-(id)serializedString;
-(id)initWithCPLArchiver:(id)arg1 ;
-(id)plistArchiveWithCPLArchiver:(id)arg1 ;
@end

