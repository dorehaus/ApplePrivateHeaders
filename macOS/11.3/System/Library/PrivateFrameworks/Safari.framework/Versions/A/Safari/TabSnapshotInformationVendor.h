/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <libobjc.A.dylib/TabSnapshotVendingInformationProvider.h>

@class BrowserTabViewItem, NSString;

@interface TabSnapshotInformationVendor : NSObject <TabSnapshotVendingInformationProvider> {

	BrowserTabViewItem* _browserTabViewItem;
	long long _purpose;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)generateTabSnapshotWithSize:(CGSize)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)shouldPersistSnapshot;
-(long long)decideSnapshotSource;
-(id)uniqueTabSnapshotKey;
-(id)initWithTabViewItem:(id)arg1 purpose:(long long)arg2 ;
@end

