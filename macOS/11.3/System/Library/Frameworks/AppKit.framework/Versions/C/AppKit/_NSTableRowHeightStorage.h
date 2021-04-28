/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSTableView;

@interface _NSTableRowHeightStorage : NSObject <NSCopying> {

	NSTableView* _tableView;
	long long _numberOfRows;
	CGPoint* _rowSpans;
	long long _rowSpansCapacity;
	long long _gapRow;
	double _gapRowHeight;
	unsigned _hasValidNumberOfRows : 1;
	unsigned _supportsVariableRowHeights : 1;
	unsigned _hasValidRowSpansStorage : 1;
	unsigned _updatingRowSpans : 1;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

