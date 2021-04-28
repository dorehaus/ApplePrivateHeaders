/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <ImageKit/IKImageEditView.h>

@class NSTableView, NSTabView, IKInfoTabView, IKImageEditWorldMap, NSDictionary, NSArray, NSString;

@interface IKImageInfoView : IKImageEditView {

	NSTableView* _infoTable;
	NSTableView* _gpsTable;
	NSTabView* _contentTabView;
	IKInfoTabView* _infoTabView;
	IKImageEditWorldMap* _worldMap;
	NSDictionary* _metaData;
	NSDictionary* _processedMetaData;
	NSArray* _tabs;
	NSString* _selection;
	double _longitude;
	double _latitude;

}
+(id)sharedImageEditView;
+(void)locateLongitude:(double)arg1 latitude:(double)arg2 query:(id)arg3 ;
+(void)locateLongitude:(double)arg1 latitude:(double)arg2 ;
+(id)processMetaData:(id)arg1 ;
-(void)viewWillBecomeActive;
-(void)viewWillBecomeInActive;
-(void)beautifyMetaData;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDataSource:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)awakeFromNib;
-(char)tableView:(id)arg1 shouldSelectRow:(long long)arg2 ;
-(id)tabs;
-(id)meta;
-(void)locate:(id)arg1 ;
-(void)setTabs:(id)arg1 ;
-(void)tabSelectionChanged:(id)arg1 ;
-(void)updateTabs;
@end

