/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/KeynoteQuicklook.framework/Versions/A/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSBlockOperation.h>

@class KNSlideNode;

@interface KNSlideNodeBlockOperation : NSBlockOperation {

	KNSlideNode* _slideNode;
	long long _type;

}

@property (nonatomic,readonly) KNSlideNode * slideNode;              //@synthesize slideNode=_slideNode - In the implementation block
@property (nonatomic,readonly) long long type;                       //@synthesize type=_type - In the implementation block
-(long long)type;
-(id)initWithSlideNode:(id)arg1 type:(long long)arg2 ;
-(KNSlideNode *)slideNode;
@end
