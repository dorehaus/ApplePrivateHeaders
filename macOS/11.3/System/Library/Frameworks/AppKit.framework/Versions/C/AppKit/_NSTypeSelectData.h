/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSString, NSView, NSTypeSelectPanel;

@interface _NSTypeSelectData : NSObject {

	NSString* _currentSearch;
	long long _currentSearchRow;
	long long _currentSearchCol;
	long long _initialSearchRow;
	long long _totalRows;
	NSView* _view;
	NSTypeSelectPanel* _typeSelectPanel;
	unsigned _foundMatch : 1;
	unsigned _reserved : 31;

}
+(char)ignoreTypos;
-(void)dealloc;
-(void)cancelScheduledEndOfSearch;
-(void)clearView;
-(long long)currentSearchCol;
-(void)_typeSelectEndCurrentSearch;
-(long long)currentSearchRow;
-(id)currentSearch;
-(void)scheduleEndOfSearch;
-(char)foundMatch;
-(void)setCurrentSearchCol:(long long)arg1 ;
-(id)nextSearchStringForNewValue:(id)arg1 ;
-(long long)initialSearchRow;
-(void)setCurrentSearchRect:(CGRect)arg1 ;
-(void)setCurrentSearchRow:(long long)arg1 ;
-(void)setCurrentSearch:(id)arg1 ;
-(void)setFoundMatch:(char)arg1 ;
-(id)initWithInitialSearchRow:(long long)arg1 totalRows:(long long)arg2 forView:(id)arg3 ;
-(void)_resetCurrentSearchRow;
-(void)_orderFrontTypeSelectPanel;
@end

