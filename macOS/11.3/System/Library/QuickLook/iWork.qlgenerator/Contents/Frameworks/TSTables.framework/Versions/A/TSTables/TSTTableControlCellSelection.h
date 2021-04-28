/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSKit/TSKSelection.h>

@interface TSTTableControlCellSelection : TSKSelection {

	char _keyboardShown;

}

@property (getter=isKeyboardShown,nonatomic,readonly) char keyboardShown;              //@synthesize keyboardShown=_keyboardShown - In the implementation block
+(Class)archivedSelectionClass;
+(id)controlCellSelection;
-(id)copy;
-(id)initWithKeyboardShown:(char)arg1 ;
-(char)isKeyboardShown;
@end

