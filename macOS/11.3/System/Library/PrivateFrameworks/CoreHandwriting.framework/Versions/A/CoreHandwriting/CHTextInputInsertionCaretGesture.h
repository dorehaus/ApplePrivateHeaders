/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/Versions/A/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHTextInputGesture.h>

@interface CHTextInputInsertionCaretGesture : CHTextInputGesture {

	CGPoint _caretTipPoint;

}

@property (nonatomic,readonly) CGPoint caretTipPoint;              //@synthesize caretTipPoint=_caretTipPoint - In the implementation block
-(void)getAffectedRange:(NSRange*)arg1 expandedToFullTokens:(char*)arg2 ;
-(id)initWithCaretTipPoint:(CGPoint)arg1 targetContentInfo:(id)arg2 locale:(id)arg3 normalizedDrawing:(id)arg4 originalDrawing:(id)arg5 ;
-(long long)caretDirection;
-(CGPoint)caretTipPoint;
@end

