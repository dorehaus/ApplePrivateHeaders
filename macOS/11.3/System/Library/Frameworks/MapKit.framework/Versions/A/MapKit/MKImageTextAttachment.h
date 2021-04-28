/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/NSTextAttachment.h>

@class MKImageAttachmentCell;

@interface MKImageTextAttachment : NSTextAttachment {

	double _verticalOffset;
	MKImageAttachmentCell* _imageAttachmentCell;

}

@property (assign,nonatomic) double verticalOffset;              //@synthesize verticalOffset=_verticalOffset - In the implementation block
-(id)initWithImage:(id)arg1 verticalOffset:(double)arg2 ;
-(void)setVerticalOffset:(double)arg1 ;
-(double)verticalOffset;
@end

