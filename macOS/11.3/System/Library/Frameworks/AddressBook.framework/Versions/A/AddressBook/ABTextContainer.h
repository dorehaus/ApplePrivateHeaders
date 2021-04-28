/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <UIFoundation/NSTextContainer.h>

@interface ABTextContainer : NSTextContainer {

	CGSize _imageSize;

}
-(double)offset;
-(char)containsPoint:(CGPoint)arg1 ;
-(CGRect)titleRect;
-(CGSize)imageSize;
-(id)initWithContainerSize:(CGSize)arg1 ;
-(char)isSimpleRectangularTextContainer;
-(CGRect)lineFragmentRectForProposedRect:(CGRect)arg1 sweepDirection:(unsigned long long)arg2 movementDirection:(unsigned long long)arg3 remainingRect:(CGRect*)arg4 ;
-(CGPoint)imageOffset;
-(void)setImageSize:(CGSize)arg1 ;
@end

