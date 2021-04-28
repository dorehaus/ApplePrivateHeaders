/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/Versions/A/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, AKBarButtonItem;

@interface AKNavigationItem : NSObject {

	NSString* _title;
	AKBarButtonItem* _rightBarButtonItem;

}

@property (copy) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (retain) AKBarButtonItem * rightBarButtonItem;              //@synthesize rightBarButtonItem=_rightBarButtonItem - In the implementation block
-(id)init;
-(id)initWithTitle:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setRightBarButtonItem:(AKBarButtonItem *)arg1 ;
-(AKBarButtonItem *)rightBarButtonItem;
@end

