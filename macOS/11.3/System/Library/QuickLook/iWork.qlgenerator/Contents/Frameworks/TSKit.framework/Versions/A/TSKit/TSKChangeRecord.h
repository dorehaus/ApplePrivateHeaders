/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSKit.framework/Versions/A/TSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSKChangeRecord : NSObject {

	int mKind;
	id mDetails;

}

@property (nonatomic,readonly) int kind; 
@property (nonatomic,readonly) id details; 
@property (nonatomic,readonly) char allowedInCommit; 
+(id)changeRecordWithKind:(int)arg1 details:(id)arg2 ;
-(int)kind;
-(id)details;
-(id)initWithKind:(int)arg1 details:(id)arg2 ;
-(char)allowedInCommit;
@end
