/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/Versions/A/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FrontBoardServices/FrontBoardServices-Structs.h>
@interface _FBSSnapshotLayer : NSObject {

	unsigned _contextID;
	CATransform3D _baseTransform;

}

@property (nonatomic,readonly) unsigned contextID;                       //@synthesize contextID=_contextID - In the implementation block
@property (nonatomic,readonly) CATransform3D baseTransform;              //@synthesize baseTransform=_baseTransform - In the implementation block
-(unsigned)contextID;
-(id)initWithContextID:(unsigned)arg1 baseTransform:(CATransform3D)arg2 ;
-(CATransform3D)baseTransform;
@end
