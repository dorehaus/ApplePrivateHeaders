/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/CNPhotoLikenessSource.h>

@class NSArray, NSString, NSImage;

@interface CNPhotoLikenessInternalSource : NSObject <NSObject, CNPhotoLikenessSource> {

	long long _sourceType;

}

@property (readonly) NSArray * childGroups; 
@property (readonly) NSString * name; 
@property (readonly) NSImage * iconImage; 
@property (copy,readonly) NSString * mediaSourceIdentifier; 
@property (readonly) id parent; 
@property (readonly) long long sourceType;                               //@synthesize sourceType=_sourceType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(id)parent;
-(long long)sourceType;
-(NSImage *)iconImage;
-(NSArray *)childGroups;
-(NSString *)mediaSourceIdentifier;
-(id)mediaObjects;
@end

