/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/Versions/A/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TLKGridLayoutManager, NSMapTable;

@interface SearchUITrackLayoutManager : NSObject {

	TLKGridLayoutManager* _layoutManager;
	NSMapTable* _tableMapping;

}

@property (nonatomic,retain) TLKGridLayoutManager * layoutManager;              //@synthesize layoutManager=_layoutManager - In the implementation block
@property (nonatomic,retain) NSMapTable * tableMapping;                         //@synthesize tableMapping=_tableMapping - In the implementation block
+(id)singleLineTextWithString:(id)arg1 highlighted:(char)arg2 ;
-(TLKGridLayoutManager *)layoutManager;
-(void)setLayoutManager:(TLKGridLayoutManager *)arg1 ;
-(id)tableRowForTrack:(id)arg1 ;
-(void)setTableMapping:(NSMapTable *)arg1 ;
-(NSMapTable *)tableMapping;
-(id)initWithTrackCardSection:(id)arg1 ;
@end
