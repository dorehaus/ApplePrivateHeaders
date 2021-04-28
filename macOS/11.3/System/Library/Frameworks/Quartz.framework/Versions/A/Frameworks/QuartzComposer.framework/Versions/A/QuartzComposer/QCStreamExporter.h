/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/QCStreamExporter.h>

@protocol QCStreamExporter
@required
+(id)exporterForStreamManager:(id)arg1;
-(id)supportedRepresentationTypes;
-(id)createRepresentationOfType:(id)arg1 withProvider:(id)arg2 withCount:(unsigned long long)arg3 elementSize:(unsigned long long)arg4 type:(int)arg5 options:(id)arg6;

@end


@class QCStreamManager;

@interface QCStreamExporter : NSObject <QCStreamExporter> {

	QCStreamManager* _manager;
	void** _unused[4];

}
+(id)exporterForStreamManager:(id)arg1 ;
-(id)description;
-(id)supportedRepresentationTypes;
-(id)streamManager;
-(id)createRepresentationOfType:(id)arg1 withProvider:(id)arg2 withCount:(unsigned long long)arg3 elementSize:(unsigned long long)arg4 type:(int)arg5 options:(id)arg6 ;
-(id)initWithStreamManager:(id)arg1 ;
@end

