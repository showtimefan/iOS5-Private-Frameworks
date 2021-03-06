/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ODIState;

@interface ODILinear : NSObject
{
    BOOL mIsHorizontal;
    BOOL mWithConnectors;
    BOOL mStretch;
    float mPointHeight;
    float mConnectorWidth;
    float mPadding;
    BOOL mIsTextCenteredHorizontally;
    BOOL mIsTextCenteredVertically;
    unsigned int mMaxPointCount;
    ODIState *mState;
}

+ (BOOL)mapIdentifier:(id)arg1 state:(id)arg2;
+ (void)mapUnknownWithState:(id)arg1;

@end

