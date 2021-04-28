/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/Versions/A/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <vCard/vCard-Structs.h>
@class NSArray;

@interface CNVCardWritingOptions : NSObject {

	char _includeNotes;
	char _includePhotos;
	char _includePrivateFields;
	char _includePrivateBundleIdentifiers;
	char _includeUserSettings;
	char _compressPhotos;
	char _prefersUncroppedPhotos;
	char _usePhotoReferencesIfAvailable;
	unsigned long long _maximumEncodingLength;
	unsigned long long _maximumImageEncodingLength;
	CGSize _maximumImageSize;
	NSArray* _treatAsUnknownProperties;
	unsigned long long _outputVersion;
	NSArray* _availableEncodings;

}

@property (assign) char includePrivateFields;                                  //@synthesize includePrivateFields=_includePrivateFields - In the implementation block
@property (assign) char includePrivateBundleIdentifiers;                       //@synthesize includePrivateBundleIdentifiers=_includePrivateBundleIdentifiers - In the implementation block
@property (assign) char includeNotes;                                          //@synthesize includeNotes=_includeNotes - In the implementation block
@property (assign) char includeUserSettings;                                   //@synthesize includeUserSettings=_includeUserSettings - In the implementation block
@property (assign) char includePhotos;                                         //@synthesize includePhotos=_includePhotos - In the implementation block
@property (assign) char compressPhotos;                                        //@synthesize compressPhotos=_compressPhotos - In the implementation block
@property (assign) char prefersUncroppedPhotos;                                //@synthesize prefersUncroppedPhotos=_prefersUncroppedPhotos - In the implementation block
@property (assign) char usePhotoReferencesIfAvailable;                         //@synthesize usePhotoReferencesIfAvailable=_usePhotoReferencesIfAvailable - In the implementation block
@property (assign) CGSize maximumImageSize;                                    //@synthesize maximumImageSize=_maximumImageSize - In the implementation block
@property (assign) unsigned long long maximumEncodingLength;                   //@synthesize maximumEncodingLength=_maximumEncodingLength - In the implementation block
@property (assign) unsigned long long maximumImageEncodingLength;              //@synthesize maximumImageEncodingLength=_maximumImageEncodingLength - In the implementation block
@property (copy) NSArray * treatAsUnknownProperties;                           //@synthesize treatAsUnknownProperties=_treatAsUnknownProperties - In the implementation block
@property (assign) unsigned long long outputVersion;                           //@synthesize outputVersion=_outputVersion - In the implementation block
@property (copy) NSArray * availableEncodings;                                 //@synthesize availableEncodings=_availableEncodings - In the implementation block
+(id)optionsFromPreferences;
-(id)description;
-(id)init;
-(void)setOutputVersion:(unsigned long long)arg1 ;
-(void)setIncludeNotes:(char)arg1 ;
-(void)setIncludePhotos:(char)arg1 ;
-(unsigned long long)outputVersion;
-(NSArray *)availableEncodings;
-(char)includeNotes;
-(char)includePhotos;
-(char)includeUserSettings;
-(char)includePrivateFields;
-(char)includePrivateBundleIdentifiers;
-(NSArray *)treatAsUnknownProperties;
-(char)usePhotoReferencesIfAvailable;
-(unsigned long long)maximumEncodingLength;
-(unsigned long long)maximumImageEncodingLength;
-(CGSize)maximumImageSize;
-(char)prefersUncroppedPhotos;
-(char)compressPhotos;
-(void)setIncludeUserSettings:(char)arg1 ;
-(void)setAvailableEncodings:(NSArray *)arg1 ;
-(void)setIncludePrivateFields:(char)arg1 ;
-(void)setIncludePrivateBundleIdentifiers:(char)arg1 ;
-(void)setCompressPhotos:(char)arg1 ;
-(void)setPrefersUncroppedPhotos:(char)arg1 ;
-(void)setUsePhotoReferencesIfAvailable:(char)arg1 ;
-(void)setMaximumEncodingLength:(unsigned long long)arg1 ;
-(void)setMaximumImageEncodingLength:(unsigned long long)arg1 ;
-(void)setMaximumImageSize:(CGSize)arg1 ;
-(void)setTreatAsUnknownProperties:(NSArray *)arg1 ;
@end

