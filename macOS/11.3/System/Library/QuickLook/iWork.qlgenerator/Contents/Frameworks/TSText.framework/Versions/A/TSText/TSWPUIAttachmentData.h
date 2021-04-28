/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSText.framework/Versions/A/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSText/TSText-Structs.h>
@class TSWPUIGraphicalAttachment;

@interface TSWPUIAttachmentData : NSObject {

	TSWPUIGraphicalAttachment* _attachment;
	long long _charIndex;
	CGPoint _location;

}

@property (nonatomic,readonly) TSWPUIGraphicalAttachment * attachment;              //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,readonly) CGPoint location;                                    //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) long long charIndex;                                 //@synthesize charIndex=_charIndex - In the implementation block
-(CGPoint)location;
-(TSWPUIGraphicalAttachment *)attachment;
-(long long)charIndex;
-(id)initWithAttachment:(id)arg1 location:(CGPoint)arg2 charIndex:(long long)arg3 ;
-(void)adjustAlignmentBy:(double)arg1 ;
@end
