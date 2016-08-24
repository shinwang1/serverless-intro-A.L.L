#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class CinderBasicApp : public App {
  public:
	void setup() override;
	void mouseDown( MouseEvent event ) override;
	void update() override;
	void draw() override;
    
//    4. Animation
//    CameraPersp		mCam;
//    gl::BatchRef	mBox;
    
//----------------------------------------
//    5. More animation
//    static const int NUM_SLICES = 12;
//    
//    CameraPersp		mCam;
//    gl::BatchRef	mSlices[NUM_SLICES];
};

void CinderBasicApp::setup()
{
//    4. Animation
//    auto lambert = gl::ShaderDef().lambert().color();
//    gl::GlslProgRef shader = gl::getStockShader( lambert );
//    mBox = gl::Batch::create( geom::Cube(), shader );
//    
//    mCam.lookAt( vec3( 3, 4.5, 4.5 ), vec3( 0, 1, 0 ) );
    
//------------------------------------------
//    5. More Animation
//    auto lambert = gl::ShaderDef().lambert().color();
//    gl::GlslProgRef	shader = gl::getStockShader( lambert );
//    
//    for( int i = 0; i < NUM_SLICES; ++i ) {
//        float rel = i / (float)NUM_SLICES;
//        float sliceHeight = 1.0f / NUM_SLICES;
//        auto slice = geom::Cube().size( 1, sliceHeight, 1 );
//        auto trans = geom::Translate( 0, rel, 0 );
//        auto color = geom::Constant( geom::COLOR,
//                                    Color( CM_HSV, rel, 1, 1 ) );
//        mSlices[i] = gl::Batch::create( slice >> trans >> color,
//                                       shader );
//    }
//    
//    mCam.lookAt( vec3( 2, 3, 2 ), vec3( 0, 0.5f, 0 ) );
}

void CinderBasicApp::mouseDown( MouseEvent event )
{
}

void CinderBasicApp::update()
{
}

void CinderBasicApp::draw()
{
	gl::clear( Color( 0, 0, 0 ) );
    
//    1. Draw Solid Circle
//    gl::drawSolidCircle( getWindowCenter(), 200 );
    
//-------------------------------------------
//    2. Draw multiple circles with color
//    // preserve the default Model matrix
//    gl::pushModelMatrix();
//    // move to the window center
//    gl::translate( getWindowCenter() );
//    
//    int numCircles = 16;
//    float radius = getWindowHeight() / 2 - 30;
//    
//    for( int c = 0; c < numCircles; ++c ) {
//        float rel = c / (float)numCircles;
//        float angle = rel * M_PI * 2;
//        vec2 offset( cos( angle ), sin( angle ) );
//        
//        // preserve the Model matrix
//        gl::pushModelMatrix();
//        // move to the correct position
//        gl::translate( offset * radius );
//        // set the color using HSV color
//        gl::color( Color( CM_HSV, rel, 1, 1 ) );
//        // draw a circle relative to Model matrix
//        gl::drawStrokedCircle( vec2(), 30 );
//        // restore the Model matrix
//        gl::popModelMatrix();
//    }
//    
//    // draw a white circle at window center
//    gl::color( Color( 1, 1, 1 ) );
//    gl::drawSolidCircle( vec2(), 15 );
//    
//    // restore the default Model matrix
//    gl::popModelMatrix();

//-----------------------------------------------
    
//    3. Draw 3d Sphere with shader
//    // turn on z-buffering
//    gl::enableDepthRead();
//    gl::enableDepthWrite();
//    
//    CameraPersp cam;
//    cam.lookAt( vec3( 3, 3, 3 ), vec3( 0 ) );
//    gl::setMatrices( cam );
//    
//    auto lambert = gl::ShaderDef().lambert();
//    auto shader = gl::getStockShader( lambert );
//    shader->bind();
//    gl::drawSphere( vec3(), 1.0f, 40 );
    
//-------------------------------------------------
//    4. Animation
//    gl::enableDepthRead();
//    gl::enableDepthWrite();
//    
//    gl::setMatrices( mCam );
//    
//    int numSpheres = 64;
//    float maxAngle = M_PI * 7;
//    float spiralRadius = 1;
//    float height = 2;
//    float boxSize = 0.05f;
//    float anim = getElapsedFrames() / 30.0f;
//    
//    for( int s = 0; s < numSpheres; ++s ) {
//        float rel = s / (float)numSpheres;
//        float angle = rel * maxAngle;
//        float y = fabs( cos( rel * M_PI + anim ) ) * height;
//        float r = rel * spiralRadius;
//        vec3 offset( r * cos( angle ), y / 2, r * sin( angle ) );
//        
//        gl::pushModelMatrix();
//        gl::translate( offset );
//        gl::scale( vec3( boxSize, y, boxSize ) );
//        gl::color( Color( CM_HSV, rel, 1, 1 ) );
//        mBox->draw();
//        gl::popModelMatrix();
//    }
    
//-----------------------------------------------------
//    5. More animation
//    gl::enableDepthRead();
//    gl::enableDepthWrite();
//    
//    gl::setMatrices( mCam );
//    
//    const float delay = 0.25f;
//    // time in seconds for one slice to rotate
//    const float rotationTime = 1.5f;
//    // time in seconds to delay each slice's rotation
//    const float rotationOffset = 0.1f; // seconds
//    // total time for entire animation
//    const float totalTime = delay + rotationTime +
//    NUM_SLICES * rotationOffset;
//    
//    // loop every 'totalTime' seconds
//    float time = fmod( getElapsedFrames() / 30.0f, totalTime );
//    
//    for( int i = 0; i < NUM_SLICES; ++i ) {
//        // animates from 0->1
//        float rotation = 0;
//        // when does the slice begin rotating
//        float startTime = i * rotationOffset;
//        // when does it complete
//        float endTime = startTime + rotationTime;
//        // are we in the middle of our time section?
//        if( time > startTime && time < endTime )
//            rotation = ( time - startTime ) / rotationTime;
//        // ease fn on rotation, then convert to radians
//        float angle = easeInOutQuint( rotation ) * M_PI / 2.0f;
//        
//        gl::ScopedModelMatrix scpModelMtx;
//        gl::rotate( angleAxis( angle, vec3( 0, 1, 0 ) ) );
//        mSlices[i]->draw();
//    }
}

CINDER_APP( CinderBasicApp, RendererGl )
