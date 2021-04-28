/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/Versions/A/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookThumbnailing/QuickLookThumbnailing-Structs.h>
#import <QuickLookThumbnailing/QLTThumbnailRequest.h>

@class FPItem, QLCacheFileProviderVersionedFileIdentifier;

@interface QLTUbiquitousFileThumbnailRequest : QLTThumbnailRequest {

	FPItem* _item;

}

@property (readonly) FPItem * item;                                                            //@synthesize item=_item - In the implementation block
@property (readonly) QLCacheFileProviderVersionedFileIdentifier * fileIdentifier; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(FPItem *)item;
-(id)initWithFPItem:(id)arg1 size:(CGSize)arg2 minimumDimension:(double)arg3 scale:(double)arg4 iconMode:(char)arg5 ;
-(id)computeContentType;
-(char)shouldProvideFoldedGenericIcon;
@end

