/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ContactsPersistence/ContactsPersistence-Structs.h>
@class NSString, NSArray;

@interface ABCDLegacyFilesystemImageHelper : NSObject {

	NSString* _imagesDirectory;
	NSString* _contactIdentifier;
	NSArray* _emailAddresses;

}

@property (readonly) NSString * imagesDirectory;                //@synthesize imagesDirectory=_imagesDirectory - In the implementation block
@property (readonly) NSString * contactIdentifier;              //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (readonly) NSArray * emailAddresses;                  //@synthesize emailAddresses=_emailAddresses - In the implementation block
+(char)shouldLogCropRectReadError:(id)arg1 ;
+(id)temporaryImagesDirectory;
-(NSString *)contactIdentifier;
-(NSArray *)emailAddresses;
-(id)imagePathOfType:(long long)arg1 ;
-(id)libraryImageData;
-(id)largeImagePath;
-(id)thumbnailImagePath;
-(id)imageDataInLibrary:(id)arg1 ;
-(id)initWithImagesDirectory:(id)arg1 contactIdentifier:(id)arg2 emailAddresses:(id)arg3 ;
-(id)imageDataOfType:(long long)arg1 ;
-(char)hasImageDataOfType:(long long)arg1 ;
-(CGRect)cropRect;
-(id)cropRectID;
-(id)cropRectHash;
-(void)removeLargeImage;
-(void)removeThumbnailImage;
-(id)imageURLOfType:(long long)arg1 ;
-(NSString *)imagesDirectory;
@end
